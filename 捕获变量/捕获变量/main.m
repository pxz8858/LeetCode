//
//  main.m
//  捕获变量
//
//  Created by 潘孝正 on 2021/3/24.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic, assign) int val;

@end

@implementation Person

- (void)dealloc {
    NSLog(@"dealloc");
}

@end

struct structPerson {
    int val;
};

int main(int argc, const char * argv[]) {
    {
        __block Person *object = [[Person alloc] init];
        __weak Person *valB = object;
        NSLog(@"pxz-1-%p-%p", &object, &valB);
        
        ^{
            NSLog(@"pxz-2-%p-%p", &object, &valB);
        }();
        
        __strong void (^pxzBlock)(void) = ^{
            NSLog(@"pxz-3-%p-%p", &object, &valB);
        };
        pxzBlock();
        
        ^{
            NSLog(@"pxz-2-%p-%p", &object, &valB);
        }();
        
        
        NSLog(@"pxz-4-%p-%p", &object, &valB);
    }
    
    return 0;
}

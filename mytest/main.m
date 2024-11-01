//
//  main.m
//  mytest
//
//  Created by Songmin Yu on 2024/8/23.
//

#import <Foundation/Foundation.h>
#import "Eat.h"
#import "Man.h"
#import "Dog.h"
#import "Fish.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Man *man = [[Man alloc] init];
        Dog *dog = [[Dog alloc] init];
        Fish *f = [[Fish alloc] init];
        [f setName:@"123"]
        [man eat];
        [dog eat];
        
        man.delegate = dog;
        if([man.delegate respondsToSelector:@selector(watch)]){
            [man.delegate watch];
        }
        
    }
    return 0;
}

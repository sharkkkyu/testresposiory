//
//  Fish.h
//  mytest
//
//  Created by Songmin Yu on 2024/8/23.
//

#import <Foundation/Foundation.h>
#import "Eat.h"
NS_ASSUME_NONNULL_BEGIN

@interface Fish : NSObject <Eat>
@property (nonatomic) NSString *name;
-(int) add 
@end

NS_ASSUME_NONNULL_END

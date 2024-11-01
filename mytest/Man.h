//
//  Man.h
//  mytest
//
//  Created by Songmin Yu on 2024/8/23.
//

#import <Foundation/Foundation.h>
#import "Eat.h"
NS_ASSUME_NONNULL_BEGIN

@interface Man : NSObject <Eat>
@property (nonatomic, weak) id <Eat> delegate;
@end

NS_ASSUME_NONNULL_END

//
//  Eat.h
//  mytest
//
//  Created by Songmin Yu on 2024/8/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Eat <NSObject>
@required
-(void) eat;
@optional
-(void) watch;
@end

NS_ASSUME_NONNULL_END

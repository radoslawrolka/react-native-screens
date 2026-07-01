#pragma once

#import <React/RCTViewManager.h>

NS_ASSUME_NONNULL_BEGIN

#if defined(__cplusplus)
@interface RNSSplitScreenComponentViewManager : RCTViewManager
#else
@interface RNSSplitScreenComponentViewManager : NSObject
#endif

@end

NS_ASSUME_NONNULL_END

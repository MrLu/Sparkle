//
//  SUUnarchiverNotifier.h
//  Sparkle
//
//  Created by Mayur Pawashe on 12/21/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif
#import "SUExport.h"

NS_ASSUME_NONNULL_BEGIN

SU_EXPORT @interface SUUnarchiverNotifier : NSObject

- (instancetype)initWithCompletionBlock:(void (^)(NSError * _Nullable))completionBlock progressBlock:(void (^ _Nullable)(double))progressBlock;

- (void)notifySuccess;

- (void)notifyFailureWithError:(NSError * _Nullable)reason;

- (void)notifyProgress:(double)progress;

@end

NS_ASSUME_NONNULL_END

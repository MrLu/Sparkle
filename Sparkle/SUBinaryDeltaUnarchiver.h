//
//  SUBinaryDeltaUnarchiver.h
//  Sparkle
//
//  Created by Mark Rowe on 2009-06-03.
//  Copyright 2009 Mark Rowe. All rights reserved.
//

#ifndef SUBINARYDELTAUNARCHIVER_H
#define SUBINARYDELTAUNARCHIVER_H

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif
#import "SUExport.h"

#import "SUUnarchiverProtocol.h"

NS_ASSUME_NONNULL_BEGIN

SU_EXPORT @interface SUBinaryDeltaUnarchiver : NSObject <SUUnarchiverProtocol>

- (instancetype)initWithArchivePath:(NSString *)archivePath updateHostBundlePath:(NSString *)updateHostBundlePath;

@end

NS_ASSUME_NONNULL_END

#endif

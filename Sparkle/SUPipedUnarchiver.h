//
//  SUPipedUnarchiver.h
//  Sparkle
//
//  Created by Andy Matuschak on 6/16/08.
//  Copyright 2008 Andy Matuschak. All rights reserved.
//

#ifndef SUPIPEDUNARCHIVER_H
#define SUPIPEDUNARCHIVER_H

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif
#import "SUExport.h"

#import "SUUnarchiverProtocol.h"

NS_ASSUME_NONNULL_BEGIN

SU_EXPORT @interface SUPipedUnarchiver : NSObject <SUUnarchiverProtocol>

- (instancetype)initWithArchivePath:(NSString *)archivePath;

@end

NS_ASSUME_NONNULL_END

#endif

//
//  SUFlatPackageUnarchiver.h
//  Autoupdate
//
//  Created by Mayur Pawashe on 1/30/21.
//  Copyright © 2021 Sparkle Project. All rights reserved.
//

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif
#import "SUExport.h"

#import "SUUnarchiverProtocol.h"

NS_ASSUME_NONNULL_BEGIN

// An unarchiver for flat packages that doesn't really do any unarchiving
SU_EXPORT @interface SUFlatPackageUnarchiver : NSObject <SUUnarchiverProtocol>

- (instancetype)initWithFlatPackagePath:(NSString *)flatPackagePath;

@end

NS_ASSUME_NONNULL_END

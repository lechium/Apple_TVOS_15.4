//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDDiffBuilder, NSString;
@protocol DNDDiffBuilding;

@protocol DNDDiffBuilding <NSObject>
- (void)diffAgainstObject:(id <DNDDiffBuilding>)arg1 usingDiffBuilder:(DNDDiffBuilder *)arg2 withDescription:(NSString *)arg3;

@optional
- (NSString *)diffDescription;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemMenuUI/NSCopying-Protocol.h>

@class NSString;

@interface TVSMAnalyticsBaseInfo : NSObject <NSCopying>
{
    NSString *_foregroundApp;	// 8 = 0x8
}

+ (id)infoWithForegroundApp:(id)arg1;	// IMP=0x0000000000001ee0
- (void).cxx_destruct;	// IMP=0x0000000000001fd0
@property(readonly, copy, nonatomic) NSString *foregroundApp; // @synthesize foregroundApp=_foregroundApp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001f90

@end


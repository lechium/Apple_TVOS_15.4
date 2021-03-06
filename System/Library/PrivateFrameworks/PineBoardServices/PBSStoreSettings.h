//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBSStoreSettings : NSObject
{
    id _domainObserver;	// 8 = 0x8
    _Bool _cachedShowSampleUberRow;	// 16 = 0x10
    _Bool _cachedShowSampleFlowcases;	// 17 = 0x11
}

+ (id)sharedInstance;	// IMP=0x00000000000594a0
- (void).cxx_destruct;	// IMP=0x0000000000059d60
- (void)_refreshPropertiesWithPreferences;	// IMP=0x0000000000059b50
@property(nonatomic) _Bool showSampleFlowcases;
@property(nonatomic) _Bool showSampleUberRow;
- (void)dealloc;	// IMP=0x0000000000059830
- (id)init;	// IMP=0x0000000000059590

@end


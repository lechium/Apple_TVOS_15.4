//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WKPreferenceObserver : NSObject
{
    struct Vector<WTF::RetainPtr<WKUserDefaults>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> m_userDefaults;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000008753a
- (id).cxx_construct;	// IMP=0x00000000000879d5
- (void).cxx_destruct;	// IMP=0x0000000000087966
- (void)preferenceDidChange:(id)arg1 key:(id)arg2 encodedValue:(id)arg3;	// IMP=0x0000000000087874
- (id)init;	// IMP=0x000000000008756d

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSArray, NSBundle;

@interface HMLocalization : NSObject
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSArray *_stringTable;	// 16 = 0x10
    NSBundle *_bundle;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000002496ed
- (void).cxx_destruct;	// IMP=0x00000000002491fd
- (id)getLocalizedOrCustomString:(id)arg1;	// IMP=0x0000000000249163
- (id)getLocalizedString:(id)arg1;	// IMP=0x0000000000248f49
- (void)_updateLocalizedStrings;	// IMP=0x0000000000248eae
- (void)handleLocaleDidChange:(id)arg1;	// IMP=0x0000000000248e4f
@property(readonly, copy) NSArray *stringTable; // @synthesize stringTable=_stringTable;
- (id)init;	// IMP=0x0000000000248c2e

@end


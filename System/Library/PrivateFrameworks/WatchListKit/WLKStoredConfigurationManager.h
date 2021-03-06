//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject
{
    WLKStoredConfiguration *_storedConfiguration;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000051b45
- (void).cxx_destruct;	// IMP=0x00000000000525c0
@property(retain, nonatomic) WLKStoredConfiguration *storedConfiguration; // @synthesize storedConfiguration=_storedConfiguration;
- (void)_setStoredConfiguration:(id)arg1;	// IMP=0x0000000000052152
- (void)_handleAccountChange:(id)arg1;	// IMP=0x0000000000052139
- (void)_handleLibraryChange:(id)arg1;	// IMP=0x0000000000052120
- (void)_updateConfiguration:(id)arg1;	// IMP=0x0000000000051ca6
- (void)_invalidateWithReason:(id)arg1;	// IMP=0x0000000000051b9a
- (void)dealloc;	// IMP=0x0000000000051ad0
- (id)init;	// IMP=0x00000000000519e5

@end


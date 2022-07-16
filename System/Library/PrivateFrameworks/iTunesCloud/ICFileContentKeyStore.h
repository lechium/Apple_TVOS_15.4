//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICContentKeyStoreProtocol-Protocol.h>

@class NSString;

@interface ICFileContentKeyStore : NSObject <ICContentKeyStoreProtocol>
{
    NSString *_filePath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cf6f0
- (id)_filePathForKeyIdentifier:(id)arg1;	// IMP=0x00000000000cf65f
- (id)_saveKeyEntry:(id)arg1;	// IMP=0x00000000000cf530
- (id)_keyEntryForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cf3da
- (id)incrementFailureCountForKeyWithIdentifier:(id)arg1;	// IMP=0x00000000000cf2e8
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cee9f
- (id)removeAllKeys;	// IMP=0x00000000000cec0b
- (id)removeKeyForIdentifier:(id)arg1;	// IMP=0x00000000000ceb78
- (id)saveKey:(id)arg1 forIdentifier:(id)arg2 withRenewalDate:(id)arg3;	// IMP=0x00000000000cea9b
- (id)loadKeyForIdentifier:(id)arg1 renewalDate:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000ce9de
- (_Bool)containsKeyForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ce936
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000ce8c3

@end


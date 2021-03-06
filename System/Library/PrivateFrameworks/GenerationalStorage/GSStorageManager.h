//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GSStorageManager : NSObject
{
}

+ (_Bool)_isPermanentStorageSupportedForFD:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000119d2
+ (_Bool)_isPermanentStorageSupportedForStatFSInfo:(struct statfs *)arg1 error:(id *)arg2;	// IMP=0x0000000000011823
+ (id)manager;	// IMP=0x0000000000011812
+ (void)initialize;	// IMP=0x0000000000011798
- (_Bool)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012f14
- (_Bool)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012ccd
- (_Bool)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012a6b
- (_Bool)removeTemporaryStorage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012a03
- (id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012758
- (id)persistentIdentifierInStorage:(id)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3;	// IMP=0x0000000000012636
- (id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000125b7
- (void)_connectionWithDaemonWasLost;	// IMP=0x0000000000012344
- (id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000012064
- (id)stagingPrefixForDocumentID:(id)arg1;	// IMP=0x0000000000011f33
- (_Bool)isPermanentStorageSupportedAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011d82
- (_Bool)mayPermanentStorageBeSupportedWithFD:(int)arg1 error:(id *)arg2;	// IMP=0x0000000000011c68
- (_Bool)mayPermanentStorageBeSupportedAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011b1d

@end


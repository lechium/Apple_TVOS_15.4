//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecDbBackupManager : NSObject
{
}

+ (id)manager;	// IMP=0x00400000000cb050
- (void)verifyBackupIntegrity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00400000000cb070
- (id)wrapMetadataKey:(id)arg1 forKeyclass:(int)arg2 error:(id *)arg3;	// IMP=0x00100000000cb068
- (id)wrapItemKey:(id)arg1 forKeyclass:(int)arg2 error:(id *)arg3;	// IMP=0x00100000000cb060
- (id)currentBackupBagUUID;	// IMP=0x00100000000cb058

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DAContainerProvider : NSObject
{
}

+ (id)providerWithAddressBook:(void *)arg1;	// IMP=0x0000000000035e2f
+ (id)providerWithContactStore:(id)arg1;	// IMP=0x0000000000035de2
- (void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(_Bool)arg2;	// IMP=0x0000000000036079
- (_Bool)setLastSyncDateForContainer:(id)arg1;	// IMP=0x000000000003602c
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(_Bool)arg3;	// IMP=0x0000000000035fcf
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(_Bool)arg6 propertiesReadonly:(_Bool)arg7 forAccount:(id)arg8;	// IMP=0x0000000000035f53
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;	// IMP=0x0000000000035f06
- (id)allContainers;	// IMP=0x0000000000035ec2
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;	// IMP=0x0000000000035e65

@end


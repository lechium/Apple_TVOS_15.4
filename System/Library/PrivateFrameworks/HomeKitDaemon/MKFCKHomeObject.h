//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHome, NSUUID;

@interface MKFCKHomeObject
{
}

+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000002c6fac
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000002c6db8
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c6cb8
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000002c6b74
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000002c6984
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c6884
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c664f
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c6585
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x00000000002c653a
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x00000000002c64ef
- (void)willSave;	// IMP=0x00000000002c63ed
- (_Bool)isReadyToImportIntoLocalModelWithContext:(id)arg1;	// IMP=0x00000000002c63e5
- (_Bool)validateHomeModelID:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000002c728c
- (_Bool)validateHome:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000002c70f0

// Remaining properties
@property(retain, nonatomic) MKFCKHome *home; // @dynamic home;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;

@end


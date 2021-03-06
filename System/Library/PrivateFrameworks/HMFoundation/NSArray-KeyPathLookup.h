//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSString;

@interface NSArray (KeyPathLookup) <HMFObject>
+ (id)shortDescription;	// IMP=0x0000000000050901
- (id)hmf_firstObjectWithCharacteristicType:(id)arg1;	// IMP=0x0000000000004de3
- (id)hmf_firstObjectWithInstanceID:(id)arg1;	// IMP=0x0000000000004dca
- (id)hmf_firstObjectWithSPIUniqueIdentifier:(id)arg1;	// IMP=0x0000000000004db1
- (id)hmf_firstObjectWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000004d98
- (id)hmf_firstObjectWithZoneID:(id)arg1;	// IMP=0x0000000000004d7f
- (id)hmf_firstObjectWithUUID:(id)arg1;	// IMP=0x0000000000004d66
- (id)hmf_firstObjectWithName:(id)arg1;	// IMP=0x0000000000004d4d
- (id)hmf_firstObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000004a4a
- (id)hmf_objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050fd3
- (id)hmf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050fbc
- (id)hmf_objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050f38
- (id)hmf_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050f21
- (_Bool)hmf_objectsAreKindOfClass:(Class)arg1;	// IMP=0x0000000000050e00
@property(readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)describeElements:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051481
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;	// IMP=0x0000000000051468
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;	// IMP=0x000000000005107e

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end


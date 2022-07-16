//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class MKFObjectDatabaseID, NSSet, NSUUID, Protocol;

@interface HMCRedirectorChangeItem : HMFObject
{
    Protocol *_modelType;	// 8 = 0x8
    NSUUID *_modelID;	// 16 = 0x10
    MKFObjectDatabaseID *_databaseID;	// 24 = 0x18
    NSSet *_changedProperties;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000ad2630
@property(readonly) NSSet *changedProperties; // @synthesize changedProperties=_changedProperties;
@property(readonly) MKFObjectDatabaseID *databaseID; // @synthesize databaseID=_databaseID;
@property(readonly) NSUUID *modelID; // @synthesize modelID=_modelID;
@property(readonly) Protocol *modelType; // @synthesize modelType=_modelType;
- (id)description;	// IMP=0x0000000000ad24ab
- (_Bool)isObjectType:(id)arg1;	// IMP=0x0000000000ad2446

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBUInt32Array;

@interface TRIFetchOnDemandFactorsPersistedTask_TreatmentAssetIndexes : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000000000efd20

// Remaining properties
@property(nonatomic) _Bool hasTreatmentId; // @dynamic hasTreatmentId;
@property(retain, nonatomic) TRIPBUInt32Array *indexArray; // @dynamic indexArray;
@property(readonly, nonatomic) unsigned long long indexArray_Count; // @dynamic indexArray_Count;
@property(copy, nonatomic) NSString *treatmentId; // @dynamic treatmentId;

@end


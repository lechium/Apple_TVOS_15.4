//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GPBUInt64Array;

@interface RevisionLogInclusionProofRequest
{
}

+ (id)descriptor;	// IMP=0x000000000007b91a

// Remaining properties
@property(nonatomic) int application; // @dynamic application;
@property(nonatomic) int logType; // @dynamic logType;
@property(retain, nonatomic) GPBUInt64Array *revisionArray; // @dynamic revisionArray;
@property(readonly, nonatomic) unsigned long long revisionArray_Count; // @dynamic revisionArray_Count;
@property(nonatomic) int version; // @dynamic version;

@end

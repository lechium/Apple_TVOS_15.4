//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, TRIPBEnumOptions;

@interface TRIPBEnumDescriptorProto
{
}

+ (id)descriptor;	// IMP=0x0000000000057673

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TRIPBEnumOptions *options; // @dynamic options;
@property(retain, nonatomic) NSMutableArray *reservedNameArray; // @dynamic reservedNameArray;
@property(readonly, nonatomic) unsigned long long reservedNameArray_Count; // @dynamic reservedNameArray_Count;
@property(retain, nonatomic) NSMutableArray *reservedRangeArray; // @dynamic reservedRangeArray;
@property(readonly, nonatomic) unsigned long long reservedRangeArray_Count; // @dynamic reservedRangeArray_Count;
@property(retain, nonatomic) NSMutableArray *valueArray; // @dynamic valueArray;
@property(readonly, nonatomic) unsigned long long valueArray_Count; // @dynamic valueArray_Count;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IPASerializationManager : NSObject
{
}

+ (id)debug_deserializeEnvelopeDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022124
+ (BOOL)debug_adjustmentTypeFromEnvelopeDictionary:(id)arg1;	// IMP=0x0000000000022081
+ (id)debug_serializeEnvelope:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021f0f
+ (id)deserialize:(id)arg1 originator:(id)arg2 format:(id)arg3 formatVersion:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000021b17
+ (id)serialize:(id)arg1 format:(id)arg2 formatVersion:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000218e1
+ (id)serialize:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021809
+ (id)serializeWithCurrentDefaultFormat:(id)arg1 format:(id *)arg2 formatVersion:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000002165d
+ (id)serializeWithCurrentDefaultFormat:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021643
+ (id)formatForAdjustmentStack:(id)arg1;	// IMP=0x00000000000214f1
+ (BOOL)adjustmentTypeForFormat:(id)arg1 formatVersion:(id)arg2;	// IMP=0x000000000002124e
+ (id)_serializerForFormat:(id)arg1 formatVersion:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000210c8
+ (id)serializerMap;	// IMP=0x00000000000210b7
+ (void)initialize;	// IMP=0x0000000000020d58

@end


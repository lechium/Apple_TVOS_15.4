//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLProgramAddressTable-Protocol.h>

@class NSArray, NSDictionary;

@interface _MTLProgramAddressTable : NSObject <MTLProgramAddressTable>
{
    NSArray *_binaryMappingsEncoderInternal;	// 8 = 0x8
    NSArray *_binaryMappingsPerInvocation;	// 16 = 0x10
    NSDictionary *_encoderInternalBinaries;	// 24 = 0x18
}

@property(readonly) NSDictionary *encoderInternalBinaries; // @synthesize encoderInternalBinaries=_encoderInternalBinaries;
@property(readonly) NSArray *binaryMappingsPerInvocation; // @synthesize binaryMappingsPerInvocation=_binaryMappingsPerInvocation;
@property(readonly) NSArray *binaryMappingsEncoderInternal; // @synthesize binaryMappingsEncoderInternal=_binaryMappingsEncoderInternal;
- (void)dealloc;	// IMP=0x00000000000306c3
- (id)initWithEncoderMappings:(id)arg1 perInvocationMappings:(id)arg2 internalMappings:(id)arg3;	// IMP=0x0000000000030639

@end


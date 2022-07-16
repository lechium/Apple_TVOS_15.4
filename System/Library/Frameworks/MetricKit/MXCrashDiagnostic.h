//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXCallStackTree, NSNumber, NSString;

@interface MXCrashDiagnostic
{
    MXCallStackTree *_callStackTree;	// 8 = 0x8
    NSString *_terminationReason;	// 16 = 0x10
    NSString *_virtualMemoryRegionInfo;	// 24 = 0x18
    NSNumber *_exceptionType;	// 32 = 0x20
    NSNumber *_exceptionCode;	// 40 = 0x28
    NSNumber *_signal;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008cba
- (void).cxx_destruct;	// IMP=0x000000000000924c
@property(readonly) NSNumber *signal; // @synthesize signal=_signal;
@property(readonly) NSNumber *exceptionCode; // @synthesize exceptionCode=_exceptionCode;
@property(readonly) NSNumber *exceptionType; // @synthesize exceptionType=_exceptionType;
@property(readonly) NSString *virtualMemoryRegionInfo; // @synthesize virtualMemoryRegionInfo=_virtualMemoryRegionInfo;
@property(readonly) NSString *terminationReason; // @synthesize terminationReason=_terminationReason;
@property(readonly) MXCallStackTree *callStackTree; // @synthesize callStackTree=_callStackTree;
- (id)toDictionary;	// IMP=0x0000000000008fa0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008dcd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008cc2
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 terminationReason:(id)arg3 applicationSpecificInfo:(id)arg4 virtualMemoryRegionInfo:(id)arg5 exceptionType:(id)arg6 exceptionCode:(id)arg7 signal:(id)arg8 stackTrace:(id)arg9;	// IMP=0x0000000000008b51

@end

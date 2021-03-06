//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface PXStoryAutoEditDurationConstraintSolver : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> _infos;	// 16 = 0x10
    struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> _solveResults;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000007041e5
- (void).cxx_destruct;	// IMP=0x00000000007041a4
- (id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)arg1 maximumDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000703e9d
- (id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)arg1 preferredDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000703b96
@property(readonly, nonatomic) CDStruct_5d4c7ed3 constrainedOverallDurationInfo;
@property(readonly, nonatomic) CDStruct_5d4c7ed3 originalOverallDurationInfo;
- (CDStruct_c8943d03)constrainedDurationInfoAtIndex:(unsigned long long)arg1;	// IMP=0x000000000070399b
- (CDStruct_c8943d03)originalDurationInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007038fd
- (_Bool)solveForMaximumDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000007032c7
- (_Bool)solveForPreferredDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000702981
- (void)addClipWithDurationInfo:(CDStruct_c8943d03)arg1;	// IMP=0x0000000000702617
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x00000000007024c0

@end


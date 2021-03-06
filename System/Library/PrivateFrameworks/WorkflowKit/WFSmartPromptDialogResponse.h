//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WFSmartPromptDialogResponse <NSSecureCoding>
{
    NSArray *_promptedStatesData;	// 8 = 0x8
}

+ (id)prepareDeletionAuthorizationDatabaseDataFromConfiguration:(id)arg1 resultCode:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001ee6fc
+ (id)prepareSmartPromptsDatabaseDataFromConfiguration:(id)arg1 resultCode:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001ee51d
+ (id)updatedStatusFromResultCode:(unsigned long long)arg1;	// IMP=0x00000000001ee4ee
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ee4e6
- (void).cxx_destruct;	// IMP=0x00000000001ee4d3
@property(readonly, copy, nonatomic) NSArray *promptedStatesData; // @synthesize promptedStatesData=_promptedStatesData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ee427
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ee2d3
- (id)initWithResult:(unsigned long long)arg1 promptedStatesData:(id)arg2;	// IMP=0x00000000001ee23a

@end


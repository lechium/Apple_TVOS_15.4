//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject
{
    NSString *_syncToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ffe0
- (void).cxx_destruct;	// IMP=0x000000000002017c
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000200bf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ffe8

@end


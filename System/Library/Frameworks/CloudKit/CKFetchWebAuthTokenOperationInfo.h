//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKFetchWebAuthTokenOperationInfo <NSSecureCoding>
{
    NSString *_APIToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000df7ed
- (void).cxx_destruct;	// IMP=0x00000000000df96e
@property(retain, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df89a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000df7f5

@end

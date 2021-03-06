//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@protocol NSSecureCoding;

@interface ICRemoteRequestOperation <NSSecureCoding>
{
    _Bool __shadowOperationForRemoteExecution;	// 8 = 0x8
    id <NSSecureCoding> _response;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000188976
- (void).cxx_destruct;	// IMP=0x00000000001888a0
@property(retain, nonatomic) id <NSSecureCoding> response; // @synthesize response=_response;
@property(nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) _Bool _shadowOperationForRemoteExecution; // @synthesize _shadowOperationForRemoteExecution=__shadowOperationForRemoteExecution;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000188855
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000188826
- (void)_execute;	// IMP=0x00000000001886bb

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@interface WFDialogResponse : NSObject <NSSecureCoding>
{
    long long _responseCode;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000103baa
@property(readonly, nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000103b47
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000103ac0
- (id)description;	// IMP=0x00000000001039dd
- (_Bool)shouldDismissDialogInTransientMode;	// IMP=0x00000000001039d5
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)initWithResponseCode:(long long)arg1;	// IMP=0x0000000000103962
- (id)initWithCancelled:(_Bool)arg1;	// IMP=0x0000000000103902

@end


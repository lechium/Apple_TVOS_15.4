//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVCloudServiceCapabilitiesRequest <SSXPCCoding>
{
    _Bool _allowsPromptingForPrivacyAcknowledgement;	// 56 = 0x38
}

@property(nonatomic) _Bool allowsPromptingForPrivacyAcknowledgement; // @synthesize allowsPromptingForPrivacyAcknowledgement=_allowsPromptingForPrivacyAcknowledgement;
- (id)copyXPCEncoding;	// IMP=0x0000000000148ca3
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000148c10
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000148b69
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000148695

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, NSDictionary, NSURL;

@interface HMDHomeCloudShareInvitation : NSObject
{
    NSURL *_url;	// 8 = 0x8
    CKDeviceToDeviceShareInvitationToken *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a7195c
@property(readonly) CKDeviceToDeviceShareInvitationToken *token; // @synthesize token=_token;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSDictionary *content;
- (id)initWithURL:(id)arg1 token:(id)arg2;	// IMP=0x0000000000a717d8

@end


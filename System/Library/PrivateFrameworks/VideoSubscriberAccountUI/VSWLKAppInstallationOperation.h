//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSOptional;

@interface VSWLKAppInstallationOperation : VSAsyncOperation
{
    id _installable;	// 8 = 0x8
    VSOptional *_result;	// 16 = 0x10
    NSString *_appAdamID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005fa69
@property(retain, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) id installable; // @synthesize installable=_installable;
- (void)executionDidBegin;	// IMP=0x000000000005f5de

@end


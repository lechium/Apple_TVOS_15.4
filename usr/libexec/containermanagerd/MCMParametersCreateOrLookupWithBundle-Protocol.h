//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@protocol MCMParametersCreateOrLookupWithBundle
@property(readonly, nonatomic) NSURL *executableURL;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(readonly, nonatomic) const char *sandboxToken;
@property(readonly, nonatomic) _Bool issueSandboxExtension;
@property(readonly, nonatomic) _Bool transient;
@property(readonly, nonatomic) _Bool createIfNecessary;
@end


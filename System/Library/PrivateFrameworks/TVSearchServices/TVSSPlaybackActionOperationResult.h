//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSearchServices/NSCopying-Protocol.h>
#import <TVSearchServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TVSSPlaybackActionOperationResult : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_appBundleID;	// 8 = 0x8
    NSURL *_playbackURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004b2e
- (void).cxx_destruct;	// IMP=0x0000000000004ffe
@property(readonly, copy, nonatomic) NSURL *playbackURL; // @synthesize playbackURL=_playbackURL;
@property(readonly, copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
- (id)description;	// IMP=0x0000000000004f16
- (unsigned long long)hash;	// IMP=0x0000000000004e89
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004c47
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004b36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004b23
- (id)init;	// IMP=0x0000000000004af8
- (id)initWithAppBundleID:(id)arg1 playbackURL:(id)arg2;	// IMP=0x0000000000004a3f

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPhotoSources/NSCopying-Protocol.h>
#import <TVPhotoSources/NSMutableCopying-Protocol.h>
#import <TVPhotoSources/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface TVPhotoAsset : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSDate *_dateCreated;	// 8 = 0x8
    NSURL *_fullResolutionURL;	// 16 = 0x10
    NSDictionary *_HTTPHeaderFields;	// 24 = 0x18
    NSString *_assetIdentifier;	// 32 = 0x20
    _Bool _isTemporaryFile;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007c06
- (void).cxx_destruct;	// IMP=0x0000000000007c35
@property(readonly, nonatomic) _Bool isTemporaryFile; // @synthesize isTemporaryFile=_isTemporaryFile;
@property(readonly, copy, nonatomic) NSDictionary *HTTPHeaderFields; // @synthesize HTTPHeaderFields=_HTTPHeaderFields;
@property(readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy, nonatomic) NSURL *fullResolutionURL; // @synthesize fullResolutionURL=_fullResolutionURL;
- (id)description;	// IMP=0x0000000000007b57
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007af6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007a95
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000079f3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000078dd
@property(readonly, copy, nonatomic) NSString *assetIdentifier;
@property(readonly, nonatomic) _Bool hasExternalURL;
@property(readonly, nonatomic) _Bool hasFileURL;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_DSID;	// 8 = 0x8
    NSString *_deviceGUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005a5a5
- (void).cxx_destruct;	// IMP=0x000000000005a57d
@property(readonly, copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005a4fb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a421
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a416
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x000000000005a339

@end


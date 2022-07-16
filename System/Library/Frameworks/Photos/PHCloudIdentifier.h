//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSSecureCoding-Protocol.h>

@class NSString;

@interface PHCloudIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localCloudIdentifier;	// 8 = 0x8
    NSString *_identifierCode;	// 16 = 0x10
    NSString *_fingerPrint;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013a1c7
+ (id)_notFoundIdentifier;	// IMP=0x000000000013a164
+ (id)notFoundIdentifier;	// IMP=0x000000000013a152
- (void).cxx_destruct;	// IMP=0x000000000013a11f
@property(readonly, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(readonly, nonatomic) NSString *identifierCode; // @synthesize identifierCode=_identifierCode;
@property(readonly, nonatomic) NSString *localCloudIdentifier; // @synthesize localCloudIdentifier=_localCloudIdentifier;
- (id)description;	// IMP=0x000000000013a0ef
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013a062
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000139fe9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139fde
- (unsigned long long)hash;	// IMP=0x0000000000139f9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000139ec8
@property(readonly, nonatomic) NSString *stringValue;
- (id)initAsNotFoundIdentifier;	// IMP=0x0000000000139dcb
- (id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2 fingerPrint:(id)arg3;	// IMP=0x0000000000139cd2
- (id)initWithStringValue:(id)arg1;	// IMP=0x0000000000139b62

@end


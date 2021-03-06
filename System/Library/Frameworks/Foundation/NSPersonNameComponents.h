//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding>
{
    id _private;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e271
+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(_Bool)arg1;	// IMP=0x000000000007eb50
+ (id)_allProperties;	// IMP=0x000000000007ea85
+ (id)_allComponents;	// IMP=0x000000000007e9c5
- (unsigned long long)hash;	// IMP=0x000000000007e879
- (_Bool)isEqualToComponents:(id)arg1;	// IMP=0x000000000007e6e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e6cb
- (id)description;	// IMP=0x000000000007e5a9
@property(copy) NSPersonNameComponents *phoneticRepresentation;
@property(copy) NSString *nickname;
@property(copy) NSString *nameSuffix;
@property(copy) NSString *namePrefix;
@property(copy) NSString *middleName;
@property(copy) NSString *familyName;
@property(copy) NSString *givenName;
- (void)dealloc;	// IMP=0x000000000007e417
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e3af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007e33f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007e279
- (id)init;	// IMP=0x000000000007e202
- (_Bool)_isEmpty;	// IMP=0x000000000007ed74
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(_Bool)arg1;	// IMP=0x000000000007ebed

@end


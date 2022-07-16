//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding>
{
    NSString *_extensionIdentifier;	// 8 = 0x8
    NSString *_localizedExtensionName;	// 16 = 0x10
    NSString *_localizedExtensionContainingAppName;	// 24 = 0x18
    NSString *_localizedLabel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000390a6
- (void).cxx_destruct;	// IMP=0x00000000000394df
@property(copy, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(copy, nonatomic) NSString *localizedExtensionContainingAppName; // @synthesize localizedExtensionContainingAppName=_localizedExtensionContainingAppName;
@property(copy, nonatomic) NSString *localizedExtensionName; // @synthesize localizedExtensionName=_localizedExtensionName;
@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000392d5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000390ae
- (id)description;	// IMP=0x0000000000038fa7

@end

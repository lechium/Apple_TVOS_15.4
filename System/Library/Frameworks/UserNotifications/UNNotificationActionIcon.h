//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString;

@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _systemIcon;	// 8 = 0x8
    NSString *_imageName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ecd9
+ (id)_iconWithImageName:(id)arg1 systemIcon:(_Bool)arg2;	// IMP=0x000000000000e992
+ (id)iconWithSystemImageName:(id)arg1;	// IMP=0x000000000000e97b
+ (id)iconWithTemplateImageName:(id)arg1;	// IMP=0x000000000000e967
- (void).cxx_destruct;	// IMP=0x000000000000ee67
@property(nonatomic, getter=isSystemIcon) _Bool systemIcon; // @synthesize systemIcon=_systemIcon;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ed7e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ece1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ecce
- (id)description;	// IMP=0x000000000000ec62
- (id)_description;	// IMP=0x000000000000eba4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000eaca
- (unsigned long long)hash;	// IMP=0x000000000000ea68
- (id)_initWithImageName:(id)arg1 systemIcon:(_Bool)arg2;	// IMP=0x000000000000e9ea

@end


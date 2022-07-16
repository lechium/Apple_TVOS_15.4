//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFIcon;

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    WFIcon *_icon;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000172fdd
+ (id)attributionWithAppBundleIdentifier:(id)arg1;	// IMP=0x0000000000172e3e
+ (id)attributionWithTitle:(id)arg1 icon:(id)arg2;	// IMP=0x0000000000172dd2
- (void).cxx_destruct;	// IMP=0x0000000000172daa
@property(readonly, nonatomic) WFIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000172ce8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000172bf5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000172b60
- (id)description;	// IMP=0x0000000000172a97
- (id)initWithTitle:(id)arg1 icon:(id)arg2;	// IMP=0x000000000017296b

@end

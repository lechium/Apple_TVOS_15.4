//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@interface AXPathWrapper : NSObject <NSSecureCoding>
{
    struct CGPath *_path;	// 8 = 0x8
}

+ (id)currentSharedInstance;	// IMP=0x00000000000464a6
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004649e
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046ae4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000465be

@end


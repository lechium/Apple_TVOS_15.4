//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSCopying-Protocol.h>
#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFNotificationError : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_errorDescription;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008d7d5
- (void).cxx_destruct;	// IMP=0x000000000008d985
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
- (id)description;	// IMP=0x000000000008d941
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008d917
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008d876
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008d7dd

@end


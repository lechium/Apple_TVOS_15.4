//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d7262
+ (id)nostoresQueryGenerationToken;	// IMP=0x00000000000d7255
+ (id)currentQueryGenerationToken;	// IMP=0x00000000000d7248
+ (id)unpinnedQueryGenerationToken;	// IMP=0x00000000000d723b
+ (void)initialize;	// IMP=0x00000000000d70e1
- (_Bool)_isEnabled;	// IMP=0x00000000000d72ff
- (id)description;	// IMP=0x00000000000d72da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d72cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d72c3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d7298
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d726a

@end

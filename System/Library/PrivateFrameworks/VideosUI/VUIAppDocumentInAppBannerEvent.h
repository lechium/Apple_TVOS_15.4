//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentInAppBannerEvent <NSCopying>
{
    NSString *_targetId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000069ed8
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
- (id)description;	// IMP=0x0000000000069d70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069c12
- (unsigned long long)hash;	// IMP=0x0000000000069bbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069bb1
- (id)dictionaryRepresentation;	// IMP=0x0000000000069b05
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000069a96
- (id)initWithTargetId:(id)arg1;	// IMP=0x00000000000699d6

@end


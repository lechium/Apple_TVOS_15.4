//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPostPlayUpdateEvent <NSCopying>
{
    NSDictionary *_postPlayUpdateData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000710a
@property(retain, nonatomic) NSDictionary *postPlayUpdateData; // @synthesize postPlayUpdateData=_postPlayUpdateData;
- (id)dictionaryRepresentation;	// IMP=0x000000000000702a
- (id)initWithPostPlayUpdateData:(id)arg1;	// IMP=0x0000000000006f51
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000006ee2

@end


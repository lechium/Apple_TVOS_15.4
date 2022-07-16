//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, GEOPDPublisher, NSString, NSURL;
@protocol GEOCollectionPublisherAttribution;

@interface GEOPublisher : NSObject
{
    GEOPDPublisher *_publisher;	// 8 = 0x8
    NSString *_publisherAttributionIdentifierString;	// 16 = 0x10
    id <GEOCollectionPublisherAttribution> _publisherAttribution;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007cd319
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, nonatomic, getter=isSuppressed) _Bool suppressed;
@property(readonly, nonatomic) NSURL *publisherURL;
@property(readonly, nonatomic) NSString *publisherDescription;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) long long totalCollectionCount;
- (unsigned long long)hash;	// IMP=0x00000000007cd111
@property(readonly, nonatomic) id <GEOCollectionPublisherAttribution> publisherAttribution; // @synthesize publisherAttribution=_publisherAttribution;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007cd02b
- (id)initWithPublisher:(id)arg1 usingAttribution:(id)arg2;	// IMP=0x00000000007ccdb5

@end

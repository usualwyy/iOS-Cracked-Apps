//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCPluginContext.h"

#import "MCPluginOfficialContentContextProtocol.h"

@class NSString;

@interface MCOfficialContentContext : MCPluginContext <MCPluginOfficialContentContextProtocol>
{
    id <MCOfficialContentPresenterInterface> _officialContentPresenterInterface;
    id <MCInputPresenterProtocol> _chatPageInputPresenter;
}

@property(nonatomic) __weak id <MCInputPresenterProtocol> chatPageInputPresenter; // @synthesize chatPageInputPresenter=_chatPageInputPresenter;
@property(nonatomic) __weak id <MCOfficialContentPresenterInterface> officialContentPresenterInterface; // @synthesize officialContentPresenterInterface=_officialContentPresenterInterface;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

